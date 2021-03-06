//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSDictionary, NSNumber, NSString;

@interface DZRSearchEvent : DeezerLogEvent
{
    NSDictionary *_item;
    NSString *_query;
    NSString *_suggested_query;
    NSString *_action;
    NSString *_method;
    NSNumber *_isOffline;
    NSString *_context;
}

+ (id)eventWithAction:(id)arg1 source:(id)arg2 query:(id)arg3 suggestedQuery:(id)arg4 andContext:(id)arg5;
+ (id)eventWithAction:(id)arg1 source:(id)arg2 query:(id)arg3 andContext:(id)arg4;
+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSNumber *isOffline; // @synthesize isOffline=_isOffline;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *suggested_query; // @synthesize suggested_query=_suggested_query;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSDictionary *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)getItemTypeKeyFor:(long long)arg1;
- (void)setItemWithId:(id)arg1 type:(long long)arg2 rank:(id)arg3 isBestResult:(_Bool)arg4 isAlternative:(_Bool)arg5;
- (void)setItemWithId:(id)arg1 type:(long long)arg2 rank:(id)arg3;
- (id)dictionary;

@end

