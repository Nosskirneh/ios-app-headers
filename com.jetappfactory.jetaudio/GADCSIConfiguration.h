//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADCSIConfiguration : NSObject
{
    NSString *_cachedUserAgentString;
    _Bool _reportingEnabled;
    NSString *_server;
    NSString *_serviceName;
    long long _version;
}

+ (id)defaultConfiguration;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
@property(nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void).cxx_destruct;
- (void)setReportingProbability:(float)arg1;
- (id)init;
- (id)initWithServiceName:(id)arg1;

@end

