//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString;

@interface MobFoxWKNavigationDelegate : NSObject <WKNavigationDelegate>
{
    _Bool _adTouched;
    NSString *_domain;
    CDUnknownBlockType _adClickCb;
    CDUnknownBlockType _finishNavigationCb;
}

@property(copy, nonatomic) CDUnknownBlockType finishNavigationCb; // @synthesize finishNavigationCb=_finishNavigationCb;
@property(copy, nonatomic) CDUnknownBlockType adClickCb; // @synthesize adClickCb=_adClickCb;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool adTouched; // @synthesize adTouched=_adTouched;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)init:(id)arg1 adClickedCB:(CDUnknownBlockType)arg2 finishNavigation:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

