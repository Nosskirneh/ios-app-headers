//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMJSONModel.h"

@class NSString;

@interface IMRootConfig_SDKInfoModel : IMJSONModel
{
    NSString *_version;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end

