//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface VehicleDataKeyList_IAC_10 : NSObject
{
    unsigned int _length;
    NSData *_keys;
}

@property(retain) NSData *keys; // @synthesize keys=_keys;
@property unsigned int length; // @synthesize length=_length;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

