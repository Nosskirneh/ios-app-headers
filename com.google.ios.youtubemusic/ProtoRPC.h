//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRPCCall.h"

@protocol GRXWriteable;

@interface ProtoRPC : GRPCCall
{
    id <GRXWriteable> _responseWriteable;
}

- (void).cxx_destruct;
- (void)startWithWriteable:(id)arg1;
- (void)start;
- (id)initWithHost:(id)arg1 method:(id)arg2 requestsWriter:(id)arg3 responseClass:(Class)arg4 responsesWriteable:(id)arg5;
- (id)initWithHost:(id)arg1 path:(id)arg2 requestsWriter:(id)arg3;

@end

