//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GFMIFamilyCreationResult;

@protocol GFMIEventsDelegate <NSObject>

@optional
- (void)signedInUserHasDeletedFamily;
- (void)signedInUserHasLeftFamily;
- (void)signedInUserHasRemovedSelfParentPrivileges;
- (void)familyMembersChanged;
- (void)familyMembersListExited;
- (void)familyCreationCompletedWithResult:(GFMIFamilyCreationResult *)arg1;
@end
