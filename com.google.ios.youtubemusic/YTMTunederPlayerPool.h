//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString;
@protocol YTResponder;

@interface YTMTunederPlayerPool : NSObject <YTResponder>
{
    NSMutableArray *_pool;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)createPlayerViewController;
- (id)acquireWithEventsDelegate:(id)arg1;
- (void)relinquishPlayerViewController:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

