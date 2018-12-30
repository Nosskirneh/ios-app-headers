//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSArray, NSDictionary, NSString;
@protocol BranchActivityItemProviderDelegate;

@interface BranchActivityItemProvider : UIActivityItemProvider
{
    NSDictionary *_params;
    NSArray *_tags;
    NSString *_feature;
    NSString *_stage;
    NSString *_campaign;
    NSString *_alias;
    NSString *_userAgentString;
    id <BranchActivityItemProviderDelegate> _delegate;
}

+ (id)humanReadableChannelWithActivityType:(id)arg1;
@property(nonatomic) __weak id <BranchActivityItemProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(retain, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)aliasForChannel:(id)arg1;
- (id)campaignForChannel:(id)arg1;
- (id)stageForChannel:(id)arg1;
- (id)featureForChannel:(id)arg1;
- (id)tagsForChannel:(id)arg1;
- (id)paramsForChannel:(id)arg1;
- (id)item;
- (_Bool)returnURL;
- (id)initWithParams:(id)arg1 tags:(id)arg2 feature:(id)arg3 stage:(id)arg4 campaign:(id)arg5 alias:(id)arg6 delegate:(id)arg7;
- (id)initWithParams:(id)arg1 andTags:(id)arg2 andFeature:(id)arg3 andStage:(id)arg4 andAlias:(id)arg5;

@end

