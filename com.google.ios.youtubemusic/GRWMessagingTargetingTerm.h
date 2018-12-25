//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWMessageTargetingEvaluable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GRWMessagingEventCountPredicate, GRWMessagingPermissionPredicate, NSString;

@interface GRWMessagingTargetingTerm : NSObject <NSSecureCoding, GRWMessageTargetingEvaluable>
{
    _Bool _negated;
    GRWMessagingEventCountPredicate *_eventCountPredicate;
    GRWMessagingPermissionPredicate *_permissionPredicate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool negated; // @synthesize negated=_negated;
@property(readonly, nonatomic) GRWMessagingPermissionPredicate *permissionPredicate; // @synthesize permissionPredicate=_permissionPredicate;
@property(readonly, nonatomic) GRWMessagingEventCountPredicate *eventCountPredicate; // @synthesize eventCountPredicate=_eventCountPredicate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isSatisfiedWithCounter:(id)arg1 forAccount:(id)arg2;
- (_Bool)isValid;
- (id)initWithEvents:(id)arg1 minValueInclusive:(id)arg2 maxValue:(id)arg3 negated:(_Bool)arg4;
- (id)initWithPermissionPredicate:(id)arg1 negated:(_Bool)arg2;
- (id)initWithEventCountPredicate:(id)arg1 negated:(_Bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

