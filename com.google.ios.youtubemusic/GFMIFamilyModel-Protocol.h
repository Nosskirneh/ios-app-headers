//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GFMIFamilySetupParameters, GPCPromise, NSSet, NSString;

@protocol GFMIFamilyModel <NSObject>
- (GPCPromise *)stopSupervisionOfMemberWithID:(NSString *)arg1;
- (GPCPromise *)updateRoleForMember:(NSString *)arg1 toRole:(long long)arg2 allowRemovingExistingParent:(_Bool)arg3;
- (GPCPromise *)leaveFamily;
- (GPCPromise *)removeMemberWithID:(NSString *)arg1;
- (GPCPromise *)cancelInvitationWithID:(NSString *)arg1;
- (GPCPromise *)sendInvitationsToEmails:(NSSet *)arg1;
- (GPCPromise *)instrumentChallengeTokenToAddMember;
- (GPCPromise *)unmetPreconditionsToAddMember;
- (GPCPromise *)canAddMemberWithRole:(long long)arg1;
- (GPCPromise *)canAddChild;
- (GPCPromise *)canAddMember;
- (GPCPromise *)allPeople;
- (GPCPromise *)requiresCVNChallenge;
- (GPCPromise *)deleteFamily;
- (GPCPromise *)canCreateFamily;
- (GPCPromise *)createFamily:(GFMIFamilySetupParameters *)arg1 withAuditToken:(NSString *)arg2;
@end

