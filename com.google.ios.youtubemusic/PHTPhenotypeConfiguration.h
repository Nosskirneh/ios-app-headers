//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PHTPhenotypeExperimentTokens;

@interface PHTPhenotypeConfiguration : NSObject
{
    _Bool _isDiff;
    NSDictionary *_flags;
    NSArray *_flagsToDelete;
    NSString *_diffToken;
    NSString *_serverToken;
    NSString *_userID;
    PHTPhenotypeExperimentTokens *_tokens;
    long long _configurationVersion;
}

@property(readonly, nonatomic) long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, nonatomic) PHTPhenotypeExperimentTokens *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, nonatomic) NSString *diffToken; // @synthesize diffToken=_diffToken;
@property(readonly, nonatomic) NSArray *flagsToDelete; // @synthesize flagsToDelete=_flagsToDelete;
@property(readonly, nonatomic) NSDictionary *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) _Bool isDiff; // @synthesize isDiff=_isDiff;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDiffDictionary:(id)arg1 flagsToDelete:(id)arg2 diffToken:(id)arg3 serverToken:(id)arg4 userID:(id)arg5 tokens:(id)arg6 configurationVersion:(long long)arg7;
- (id)initWithAllFlagsDictionary:(id)arg1 diffToken:(id)arg2 serverToken:(id)arg3 userID:(id)arg4 tokens:(id)arg5 configurationVersion:(long long)arg6;
- (id)initWithIsDiff:(_Bool)arg1 flags:(id)arg2 flagsToDelete:(id)arg3 diffToken:(id)arg4 serverToken:(id)arg5 userID:(id)arg6 tokens:(id)arg7 configurationVersion:(long long)arg8;

@end
