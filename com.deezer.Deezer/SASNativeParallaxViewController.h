//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SASNativeParallaxViewDelegate-Protocol.h"

@class NSString, SASAdViewController, SASNativeParallaxView;
@protocol SASNativeParallaxViewControllerDelegate;

@interface SASNativeParallaxViewController : NSObject <SASNativeParallaxViewDelegate>
{
    SASAdViewController *_adViewController;
    id <SASNativeParallaxViewControllerDelegate> _delegate;
    SASNativeParallaxView *_parallaxView;
}

@property(retain, nonatomic) SASNativeParallaxView *parallaxView; // @synthesize parallaxView=_parallaxView;
@property(nonatomic) __weak id <SASNativeParallaxViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SASAdViewController *adViewController; // @synthesize adViewController=_adViewController;
- (void).cxx_destruct;
- (void)visibilityChanged:(_Bool)arg1;
- (id)nativeParallaxViewRequestsParallaxInfos:(id)arg1;
- (_Bool)isRequestAnExternalRedirect:(id)arg1 navigationType:(unsigned long long)arg2 baseURL:(id)arg3;
- (_Bool)nativeParallaxView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(unsigned long long)arg3 baseURL:(id)arg4;
- (void)nativeParallaxViewClicked:(id)arg1;
- (void)nativeParallaxViewDidLoadContent:(id)arg1;
- (void)nativeParallaxView:(id)arg1 didFailToLoadContentWithError:(id)arg2;
- (void)stopLoading;
- (void)adViewFrameChanged;
- (void)loadAd:(id)arg1;
- (void)reset;
- (id)initWithController:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

