//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VCRequest.h"

@class NSDictionary, NSString;

@interface VCCommandRequest : VCRequest
{
    NSString *_command;
    NSDictionary *_data;
}

+ (id)commandRequestWithCommand:(id)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)buildParameters;
- (id)initWithCommand:(id)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

