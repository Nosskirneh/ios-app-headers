//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PDLLogEntity;

@interface PDLFieldLoggingMetadata : NSObject
{
    NSString *_value;
    PDLLogEntity *_logEntity;
    unsigned long long _position;
    NSString *_contactId;
    NSString *_query;
    NSNumber *_querySessionID;
}

@property(readonly, nonatomic) NSNumber *querySessionID; // @synthesize querySessionID=_querySessionID;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(readonly, nonatomic) PDLLogEntity *logEntity; // @synthesize logEntity=_logEntity;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)setQuery:(id)arg1 querySessionID:(id)arg2;
- (id)initForField:(id)arg1 logEntity:(id)arg2 position:(unsigned long long)arg3 contactId:(id)arg4;

@end

