//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STKCoreFoundationDataSource;

@interface CoreFoundationDataSourceClientInfo : NSObject
{
    struct __CFReadStream *readStreamRef;
    STKCoreFoundationDataSource *datasource;
}

@property(retain) STKCoreFoundationDataSource *datasource; // @synthesize datasource;
@property struct __CFReadStream *readStreamRef; // @synthesize readStreamRef;
- (void).cxx_destruct;

@end

