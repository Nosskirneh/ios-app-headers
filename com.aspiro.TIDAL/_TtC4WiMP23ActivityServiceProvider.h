//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPBaseServiceProvider.h"

@class NSString;

@interface _TtC4WiMP23ActivityServiceProvider : WMPBaseServiceProvider
{
    // Error parsing type: , name: countryCode
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)urlForActivityWithUserId:(id)arg1 sortAndRangeParameters:(id)arg2;
- (void)fetchActivityByUserId:(id)arg1 sortAndRangeParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCountryCode:(id)arg1;
@property(nonatomic, readonly) NSString *countryCode; // @synthesize countryCode;

@end

