//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTRequestAccounting : NSObject
{
    struct RequestAccountingSink _request_accounting_sink;
}

+ (id)requestAccountingWithSink:(struct RequestAccountingSink)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRequestFromURL:(id)arg1 httpMethod:(id)arg2 sourceIdentifier:(id)arg3 bytesDownloaded:(int)arg4 bytesUploaded:(int)arg5 payloadSize:(int)arg6 timeTaken:(double)arg7 isCached:(_Bool)arg8;
- (id)initWithSink:(struct RequestAccountingSink)arg1;

@end

