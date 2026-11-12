#import <UIKit/UIKit.h>

NSMutableArray<NSDictionary *> *localVersionList, *remoteVersionList;

// Posted on the main queue whenever remoteVersionList has been (re)loaded.
extern NSString *const AmethystVersionListUpdatedNotification;
// Posted when every manifest source failed; userInfo[@"error"] has the reason.
extern NSString *const AmethystVersionListFailedNotification;

@interface LauncherNavigationController : UINavigationController

@property(nonatomic) UIProgressView *progressViewMain, *progressViewSub;
@property(nonatomic) UILabel* progressText;

- (void)enterModInstallerWithPath:(NSString *)path hitEnterAfterWindowShown:(BOOL)hitEnter;
- (void)fetchLocalVersionList;
- (void)fetchRemoteVersionList;
- (void)setInteractionEnabled:(BOOL)enable forDownloading:(BOOL)downloading;

@end
