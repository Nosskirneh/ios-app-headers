//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSAServiceClientStream.h"

@class NSString;

@interface MSAServiceClientTCP : MSAServiceClientStream
{
    NSString *_serviceIp;
    unsigned long long _servicePort;
}

- (void).cxx_destruct;
- (void)connect;
- (_Bool)start;
- (id)initWithIp:(id)arg1 andPort:(unsigned long long)arg2;

@end

