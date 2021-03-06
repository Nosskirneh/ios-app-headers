//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface VOXHistogramDescriptor : NSObject
{
    NSArray *_levels;
    double _duration;
    double _levelInterval;
    id _userID;
}

@property(retain, nonatomic) id userID; // @synthesize userID=_userID;
@property(nonatomic) double levelInterval; // @synthesize levelInterval=_levelInterval;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *levels; // @synthesize levels=_levels;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLevels:(id)arg1 duration:(double)arg2 userID:(id)arg3;

@end

