//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHStackLayoutManagerLayoutLogic-Protocol.h"

@class NSString;

@interface RHStackLayoutManagerAnchorLogic : NSObject <RHStackLayoutManagerLayoutLogic>
{
    int _anchor;
}

@property(nonatomic) int anchor; // @synthesize anchor=_anchor;
- (void)performLayoutForLayoutManager:(id)arg1 managedViews:(id)arg2;
- (id)initWithAnchor:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

