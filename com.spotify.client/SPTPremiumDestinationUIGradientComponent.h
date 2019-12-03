//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"

@class NSSet;
@protocol HUBComponentChildDelegate;

@interface SPTPremiumDestinationUIGradientComponent : NSObject <HUBComponent, HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> childDelegate;
}

@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;

@end
