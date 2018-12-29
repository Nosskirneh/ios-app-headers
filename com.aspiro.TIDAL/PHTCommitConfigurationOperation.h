//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTBaseOperation.h"

@class NSArray, NSString, PHTPhenotype, PHTPhenotypeCache;

@interface PHTCommitConfigurationOperation : PHTBaseOperation
{
    PHTPhenotype *_phenotype;
    PHTPhenotypeCache *_cache;
    NSString *_packageName;
    NSString *_user;
    NSString *_diffToken;
    NSArray *_commitObservers;
    CDUnknownBlockType _committer;
}

@property(copy, nonatomic) CDUnknownBlockType committer; // @synthesize committer=_committer;
@property(retain, nonatomic) NSArray *commitObservers; // @synthesize commitObservers=_commitObservers;
@property(retain, nonatomic) NSString *diffToken; // @synthesize diffToken=_diffToken;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) PHTPhenotypeCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak PHTPhenotype *phenotype; // @synthesize phenotype=_phenotype;
- (void).cxx_destruct;
- (_Bool)deleteApplicationState:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (void)execute;
- (_Bool)shouldBeLogged;
- (id)applicationInfo;
- (id)initWithWithCounterName:(id)arg1 phenotype:(id)arg2 logger:(id)arg3 database:(id)arg4 cache:(id)arg5 packageName:(id)arg6 user:(id)arg7 diffToken:(id)arg8 observers:(id)arg9 committer:(CDUnknownBlockType)arg10;

@end

