//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UVScreenEvent : NSObject
{
    _Bool AutoDetected;
    int Type;
    NSString *Name;
    long long StartTime;
    long long _PreSessionStartTime;
}

@property(nonatomic) long long PreSessionStartTime; // @synthesize PreSessionStartTime=_PreSessionStartTime;
@property(nonatomic) int Type; // @synthesize Type;
@property(nonatomic) _Bool AutoDetected; // @synthesize AutoDetected;
@property(nonatomic) long long StartTime; // @synthesize StartTime;
@property(retain, nonatomic) NSString *Name; // @synthesize Name;
- (void).cxx_destruct;
- (id)toJson;

@end

