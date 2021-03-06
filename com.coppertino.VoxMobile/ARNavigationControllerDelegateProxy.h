//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSObject, NSString;
@protocol UINavigationControllerDelegate;

@interface ARNavigationControllerDelegateProxy : NSProxy <UINavigationControllerDelegate>
{
    NSObject<UINavigationControllerDelegate> *_originalDelegate;
    NSObject<UINavigationControllerDelegate> *_analyticsDelegate;
}

@property(readonly, nonatomic) NSObject<UINavigationControllerDelegate> *analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) NSObject<UINavigationControllerDelegate> *originalDelegate; // @synthesize originalDelegate=_originalDelegate;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)analyticsDelegateRespondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithAnalyticsDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

