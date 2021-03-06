//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Launcher.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "URLServiceLauncher-Protocol.h"

@class LaunchEntityFetcher, LauncherRegistry, NSString, NSURL, SplashScreenViewController, UIApplication, Urn;

@interface EntityLoadingLauncher : Launcher <UIAlertViewDelegate, URLServiceLauncher>
{
    Urn *_urn;
    NSURL *_url;
    UIApplication *_application;
    SplashScreenViewController *_splashScreenViewController;
    LaunchEntityFetcher *_launchEntityFetcher;
    LauncherRegistry *_launcherRegistry;
    Launcher *_entityLauncher;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _resolutionCompletionHandler;
}

+ (id)storyboardName;
@property(copy, nonatomic) CDUnknownBlockType resolutionCompletionHandler; // @synthesize resolutionCompletionHandler=_resolutionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) Launcher *entityLauncher; // @synthesize entityLauncher=_entityLauncher;
@property(readonly, nonatomic) LauncherRegistry *launcherRegistry; // @synthesize launcherRegistry=_launcherRegistry;
@property(retain, nonatomic) LaunchEntityFetcher *launchEntityFetcher; // @synthesize launchEntityFetcher=_launchEntityFetcher;
@property(retain, nonatomic) SplashScreenViewController *splashScreenViewController; // @synthesize splashScreenViewController=_splashScreenViewController;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (void)executeCompletionHandler;
- (void)launchEntity;
- (void)restoreViewControllers;
- (void)fetchAndLaunchEntityFromUrl;
- (void)fetchAndLaunchEntityFromUrn;
- (void)fetchAndLaunchEntity;
- (void)presentSplashAndFetchFrom:(id)arg1;
- (void)restoreRootViewController;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 resolutionCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithUrn:(id)arg1 url:(id)arg2 launchEntityFetcher:(id)arg3 launcherRegistry:(id)arg4 application:(id)arg5;
- (id)initWithUrn:(id)arg1 url:(id)arg2;
- (id)initWithUrn:(id)arg1;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

