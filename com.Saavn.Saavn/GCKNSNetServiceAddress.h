//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GCKNSNetServiceAddress : NSObject
{
    unsigned short _port;
    long long _type;
    NSString *_IPAddress;
}

@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, retain, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 IPAddress:(id)arg2 port:(unsigned short)arg3;

@end

