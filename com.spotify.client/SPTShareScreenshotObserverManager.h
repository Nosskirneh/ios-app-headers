//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareScreenshotBannerPresenterDelegate-Protocol.h"
#import "SPTShareScreenshotObserver-Protocol.h"

@class NSDate, NSString, SPTScreenshotLogger, SPTShareScreenshotBannerPresenter;
@protocol SPTMetaViewController, SPTShareEntityData, SPTShareScreenshotObserverManagerDataSource, SPTShareScreenshotObserverManagerDelegate, SPTShareTestManager;

@interface SPTShareScreenshotObserverManager : NSObject <SPTShareScreenshotBannerPresenterDelegate, SPTShareScreenshotObserver>
{
    _Bool _isObserving;
    id <SPTShareScreenshotObserverManagerDelegate> _delegate;
    id <SPTShareScreenshotObserverManagerDataSource> _dataSource;
    SPTShareScreenshotBannerPresenter *_bannerPresenter;
    id <SPTShareTestManager> _testManager;
    SPTScreenshotLogger *_screenshotLogger;
    id <SPTMetaViewController> _metaViewController;
    NSDate *_lastScreenshotDate;
}

@property(retain, nonatomic) NSDate *lastScreenshotDate; // @synthesize lastScreenshotDate=_lastScreenshotDate;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTScreenshotLogger *screenshotLogger; // @synthesize screenshotLogger=_screenshotLogger;
@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTShareScreenshotBannerPresenter *bannerPresenter; // @synthesize bannerPresenter=_bannerPresenter;
@property(readonly, nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) __weak id <SPTShareScreenshotObserverManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SPTShareScreenshotObserverManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackScreenshotEvent;
- (void)actionButtonTappedInScreenshotShareBannerView:(id)arg1;
@property(readonly, nonatomic) id <SPTShareEntityData> shareEntityData;
- (id)screenshotImage;
- (void)didTakeScreenshot;
- (void)stopObserving;
- (void)startObserving;
- (void)startObservingWithFeatureFlagEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithBannerPresenter:(id)arg1 testManager:(id)arg2 screenshotLogger:(id)arg3 metaViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

