//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebApp.framework/WebApp
// UUID: 18B0D046-6B69-3331-ADC5-BCE264414544
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 279.1.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol UIApplicationDelegate <NSObject>

@optional
@property(retain, nonatomic) UIWindow *window;
- (void)application:(UIApplication *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)application:(UIApplication *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (_Bool)application:(UIApplication *)arg1 continueUserActivity:(NSUserActivity *)arg2 restorationHandler:(void (^)(NSArray *))arg3;
- (_Bool)application:(UIApplication *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (void)application:(UIApplication *)arg1 didDecodeRestorableStateWithCoder:(NSCoder *)arg2;
- (void)application:(UIApplication *)arg1 willEncodeRestorableStateWithCoder:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldRestoreApplicationState:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldSaveApplicationState:(NSCoder *)arg2;
- (UIViewController *)application:(UIApplication *)arg1 viewControllerWithRestorationIdentifierPath:(NSArray *)arg2 coder:(NSCoder *)arg3;
- (_Bool)application:(UIApplication *)arg1 shouldAllowExtensionPointIdentifier:(NSString *)arg2;
- (unsigned long long)application:(UIApplication *)arg1 supportedInterfaceOrientationsForWindow:(UIWindow *)arg2;
- (void)applicationProtectedDataDidBecomeAvailable:(UIApplication *)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(UIApplication *)arg1;
- (void)applicationWillEnterForeground:(UIApplication *)arg1;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)application:(UIApplication *)arg1 handleEventsForBackgroundURLSession:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)application:(UIApplication *)arg1 performFetchWithCompletionHandler:(void (^)(unsigned long long))arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2 fetchCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forRemoteNotification:(NSDictionary *)arg3 completionHandler:(void (^)(void))arg4;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forLocalNotification:(UILocalNotification *)arg3 completionHandler:(void (^)(void))arg4;
- (void)application:(UIApplication *)arg1 didReceiveLocalNotification:(UILocalNotification *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterUserNotificationSettings:(UIUserNotificationSettings *)arg2;
- (void)application:(UIApplication *)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(UIApplication *)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(UIApplication *)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)application:(UIApplication *)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (void)applicationSignificantTimeChange:(UIApplication *)arg1;
- (void)applicationWillTerminate:(UIApplication *)arg1;
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)arg1;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 handleOpenURL:(NSURL *)arg2;
- (void)applicationWillResignActive:(UIApplication *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (_Bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (_Bool)application:(UIApplication *)arg1 willFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)applicationDidFinishLaunching:(UIApplication *)arg1;
@end

@protocol UIWebViewDelegate <NSObject>

@optional
- (void)webView:(UIWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(UIWebView *)arg1;
- (void)webViewDidStartLoad:(UIWebView *)arg1;
- (_Bool)webView:(UIWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

@protocol UIWebViewPrivateDelegate

@optional
- (void)uiWebViewClose:(UIWebView *)arg1;
- (void)uiWebView:(UIWebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (NSURLRequest *)uiWebView:(UIWebView *)arg1 resource:(id)arg2 willSendRequest:(NSURLRequest *)arg3 redirectResponse:(NSURLResponse *)arg4 fromDataSource:(WebDataSource *)arg5;
- (NSDictionary *)uiWebView:(UIWebView *)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(WebDataSource *)arg3;
- (void)uiWebViewSupportedOrientationsUpdated:(UIWebView *)arg1;
- (void)uiWebView:(UIWebView *)arg1 printFrameView:(WebFrameView *)arg2;
- (void)uiWebView:(UIWebView *)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(WebSecurityOrigin *)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)uiWebView:(UIWebView *)arg1 frame:(WebFrame *)arg2 exceededDatabaseQuotaForSecurityOrigin:(WebSecurityOrigin *)arg3 database:(NSString *)arg4;
- (void)uiWebView:(UIWebView *)arg1 decidePolicyForMIMEType:(NSString *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)uiWebView:(UIWebView *)arg1 didReceiveTitle:(NSString *)arg2 forFrame:(WebFrame *)arg3;
- (void)uiWebView:(UIWebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)uiWebView:(UIWebView *)arg1 decidePolicyForGeolocationRequestFromOrigin:(WebSecurityOrigin *)arg2 frame:(WebFrame *)arg3 listener:(id <WebAllowDenyPolicyListener>)arg4;
- (_Bool)uiWebView:(UIWebView *)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg3 forDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didFailLoadingWithError:(NSError *)arg3 fromDataSource:(WebDataSource *)arg4;
- (void)uiWebView:(UIWebView *)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(WebDataSource *)arg3;
- (id)uiWebView:(UIWebView *)arg1 identifierForInitialRequest:(NSURLRequest *)arg2 fromDataSource:(WebDataSource *)arg3;
- (void)uiWebView:(UIWebView *)arg1 didFirstLayoutInFrame:(WebFrame *)arg2;
@end

@interface NSError (WebAppControllerExtras)
- (id)failingURL;
@end

@interface NSString (WebAppControllerExtras)
- (id)URLScheme;
@end

@interface WebAppController : WebUIDelegate <UIApplicationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate>
{
    UIWindow *_window;
    UIWebView *webView;
    UIView *_loadingView;
    long long _orientation;
    long long _pendingOrientation;
    _Bool _isRotating;
    _Bool _landscapeToLandscape;
    UIWebClip *webClip;
    NSTimer *snapshotHideTimer;
    _Bool webViewDidLayout;
    _Bool webViewHasFinishedLoading;
    _Bool snapshotHideTimeHasExpired;
    WBUSheetController *_sheetController;
    NSMutableArray *_alerts;
    struct CGRect _rotationRect;
    unsigned int _rotationEdgePin;
    float _startScale;
    float _endScale;
    WebUIAuthenticationManager *_authenticationManager;
    NSArray *_fallbackURLs;
    WebUIDownloadManager *_downloadManager;
    _Bool _isSuspended;
    struct CGRect _inputViewScreenBoundsAfterRotation;
    NSDictionary *_connectionProperties;
    UIViewController *_viewControllerToWorkaround14804109;
}

+ (id)contentBackgroundColor;
@property(readonly) UIWebView *webView; // @synthesize webView;
@property(retain) UIWebClip *webClip; // @synthesize webClip;
- (id)containerViewForAuthenticationPanel;
- (void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2;
- (void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFail:(id)arg2;
- (void)downloadManager:(id)arg1 hasData:(id)arg2 forFinishedDownload:(id)arg3;
- (void)uiWebView:(id)arg1 printFrameView:(id)arg2;
- (void)uiWebView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)uiWebView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (_Bool)uiWebView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)dealloc;
- (void)swapWebViewForImageViewOnlyIfReady;
- (void)timeLimitForLoadCompletionExpired;
- (void)resume;
- (void)suspend;
- (void)updateStatusBarStyleFromWebClip;
- (id)initForWebClipURL:(id)arg1;
- (void)loadInputAddress:(id)arg1;
- (void)_setPersistentStoragePathDefaults;
- (void)_inputViewWillRotate:(id)arg1;
- (void)_handleStatusBarHeightChanged:(id)arg1;
- (void)tryMultipleURLs:(id)arg1;
- (void)_setFallbackURLs:(id)arg1;
- (id)_viewControllerForSupportedInterfaceOrientations;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (id)rotatingContentViewForWindow:(id)arg1;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (float)_maxZoomScale;
- (float)_minZoomScale;
- (struct CGRect)browserFrameForOrientation:(long long)arg1;
- (void)layoutLandscapeSubviews;
- (void)layoutPortraitSubviews;
- (void)_setTopScrollIndicatorInset:(double)arg1;
- (void)_cancelSnapshotHideTimer;
- (id)titleForError:(id)arg1;
- (_Bool)handleCertificateError:(id)arg1 inWebView:(id)arg2;
- (void)showGenericDownloadAlert;
- (void)showProfileDownloadAlert;
- (void)showProfileInstallAlert;
- (void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2 context:(id)arg3;
- (void)addAlert:(id)arg1;
- (id)_sheetController;
- (void)continueAfterCertificateAlertWithContext:(id)arg1;
- (id)genericMessageForError:(id)arg1;
- (id)specializedMessageForError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2;
- (id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2;
- (void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3;
- (void)_ignorePolicyListener:(id)arg1;
- (void)sheetControllerDidHideSheet:(id)arg1;
- (void)sheetControllerDidShowSheet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

@interface WebAppViewController : UIViewController
{
    _Bool _setupRootViewColor;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (long long)preferredStatusBarStyle;

@end

@interface WebApplication : UIApplication <UIApplicationDelegate>
{
    NSURL *_lastActiveWebClipURL;
    NSMutableDictionary *webAppControllerDictionary;
}

- (void)applicationOpenURL:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)bringToFrontWebAppControllerForWebAppURL:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1;
- (_Bool)applicationSuspendWithSettings:(id)arg1;
- (id)_currentWebAppController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

