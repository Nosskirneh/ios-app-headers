//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeezerUser, NSArray, NSMutableArray;

@interface DZRFamilyAccountList : NSObject
{
    DeezerUser *_mainAccount;
    NSMutableArray *_memberList;
    unsigned long long _maxChildren;
}

+ (id)accountListWithUsers:(id)arg1 maxChildren:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long maxChildren; // @synthesize maxChildren=_maxChildren;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList=_memberList;
@property(readonly, nonatomic) DeezerUser *mainAccount; // @synthesize mainAccount=_mainAccount;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *memberAccounts;
- (void)removeChildAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool canAddMember;
- (id)initWithUsers:(id)arg1 maxChildren:(unsigned long long)arg2;

@end

