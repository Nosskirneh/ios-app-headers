//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBComponent-Protocol.h"
#import "EXP_HUBComponentWithChildren-Protocol.h"

@class NSNotificationCenter, NSSet;
@protocol EXP_HUBComponentChildDelegate;

@interface EXP_HUGSHeaderComponent : NSObject <EXP_HUBComponent, EXP_HUBComponentWithChildren>
{
    id <EXP_HUBComponentChildDelegate> _childDelegate;
    NSNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak id <EXP_HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (double)preferredHeightForDisplayingModel:(id)arg1;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithNotificationCenter:(id)arg1;

@end

