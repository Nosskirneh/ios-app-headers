//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface SPTNavigationControllerModalTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
}

@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithPresenting:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

