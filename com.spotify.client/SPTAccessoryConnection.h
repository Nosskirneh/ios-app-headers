//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory;

@interface SPTAccessoryConnection : NSObject
{
    EAAccessory *_accessory;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1 timestamp:(double)arg2;

@end

