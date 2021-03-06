//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface DeezerLogEvent : NSObject <NSCoding>
{
    NSString *userID;
    double time;
    NSString *_fileName;
}

+ (id)filePrefix;
+ (int)logPhase;
+ (id)persistedPropertiesNames;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) double time; // @synthesize time;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void).cxx_destruct;
- (_Bool)isVirtualEvent;
- (_Bool)shouldBeStored;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

