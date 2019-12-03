//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTMobileConcertsHubInteractionEvent : NSObject <SPTInteractionEvent>
{
    NSString *_applicationId;
    NSString *_interactionType;
    NSArray *_components;
    NSString *_action;
    NSDictionary *_actionParameters;
    NSArray *_errors;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
}

@property(copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 components:(id)arg2 action:(id)arg3 actionParameters:(id)arg4 errors:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
