//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSID : NSObject
{
    NSString *identifier;
    double start_time;
    double last_event_time;
}

+ (id)getSingleton;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
@property(nonatomic) double last_event_time;
@property(nonatomic) double start_time;
- (void)setSSID;
- (id)getYearString;
- (void)initSSID;

@end
