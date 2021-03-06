//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "GOOTransitioningView-Protocol.h"
#import "GOOTransitioningViewCopying-Protocol.h"

@class NSString;
@protocol NSCopying;

@interface GPMTransitioningImageView : UIImageView <GOOTransitioningViewCopying, GOOTransitioningView>
{
}

- (id)transitioningCopy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) id <NSCopying> transitioningViewKey;

@end

