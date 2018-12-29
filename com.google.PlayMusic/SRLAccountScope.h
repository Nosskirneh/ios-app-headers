//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SRLMemoizingScope.h"

@protocol GSCAccountId;

@interface SRLAccountScope : SRLMemoizingScope
{
    id <GSCAccountId> _accountId;
}

+ (void)removeAllAccountScopes_ForTestsOnly;
+ (void)removeScopeWithAccountId:(id)arg1;
+ (id)scopeWithAccountId:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) id <GSCAccountId> accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)initWithAccountId:(id)arg1;

@end
