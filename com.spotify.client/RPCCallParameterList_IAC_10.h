//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RPCCallParameterList_IAC_10 : NSObject
{
    unsigned char _paramLength;
    NSMutableArray *_parameters;
}

@property(retain) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property unsigned char paramLength; // @synthesize paramLength=_paramLength;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

