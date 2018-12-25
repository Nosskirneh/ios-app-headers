//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLFormat.h"

@class NSURL;

@interface MLRemoteStream : MLFormat
{
    NSURL *_URL;
}

+ (id)streamWithFormatStream:(id)arg1;
+ (id)streamWithFormatStream:(id)arg1 additionalURLParameters:(id)arg2;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)copyWithURL:(id)arg1;
- (id)initWithFormatStream:(id)arg1;
- (id)initWithURL:(id)arg1 formatStream:(id)arg2;

@end

