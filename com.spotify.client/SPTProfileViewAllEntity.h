//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTProfileBaseEntity.h"

@class NSArray;

@interface SPTProfileViewAllEntity : SPTProfileBaseEntity
{
    NSArray *_modelObjects;
    long long _dataType;
}

@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
- (void).cxx_destruct;
- (id)initWithModelObjects:(id)arg1 dataType:(long long)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end

