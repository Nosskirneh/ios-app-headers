//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GRPCChannel : NSObject
{
    NSString *_host;
    struct {
        unsigned long long _field1;
        CDStruct_183601bc *_field2;
    } *_channelArgs;
    struct grpc_channel *_unmanagedChannel;
}

+ (id)insecureChannelWithHost:(id)arg1 channelArgs:(id)arg2;
+ (id)secureChannelWithHost:(id)arg1 credentials:(struct grpc_channel_credentials *)arg2 channelArgs:(id)arg3;
+ (id)secureChannelWithHost:(id)arg1;
+ (id)secureCronetChannelWithHost:(id)arg1 channelArgs:(id)arg2;
@property(readonly, nonatomic) struct grpc_channel *unmanagedChannel; // @synthesize unmanagedChannel=_unmanagedChannel;
- (void).cxx_destruct;
- (struct grpc_call *)unmanagedCallWithPath:(id)arg1 serverName:(id)arg2 timeout:(double)arg3 completionQueue:(id)arg4;
- (void)dealloc;
- (id)initWithHost:(id)arg1 secure:(_Bool)arg2 credentials:(struct grpc_channel_credentials *)arg3 channelArgs:(id)arg4;
- (id)initWithHost:(id)arg1 cronetEngine:(struct stream_engine *)arg2 channelArgs:(id)arg3;

@end

