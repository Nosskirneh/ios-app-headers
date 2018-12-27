//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURLCredential, NSURLRequest, NSURLSession;

@protocol SDWebImageDownloaderOperationInterface <NSObject>
- (_Bool)cancel:(id)arg1;
- (void)setCredential:(NSURLCredential *)arg1;
- (NSURLCredential *)credential;
- (void)setShouldDecompressImages:(_Bool)arg1;
- (_Bool)shouldDecompressImages;
- (id)addHandlersForProgress:(void (^)(long long, long long, NSURL *))arg1 completed:(void (^)(UIImage *, NSData *, NSError *, _Bool))arg2;
- (id)initWithRequest:(NSURLRequest *)arg1 inSession:(NSURLSession *)arg2 options:(unsigned long long)arg3;
@end

