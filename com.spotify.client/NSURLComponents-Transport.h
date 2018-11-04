//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLComponents.h"

@class NSArray, NSDictionary;

@interface NSURLComponents (Transport)
+ (id)spt_spotifyTransportHTTPPortOverride;
+ (id)spt_spotifyTransportHTTPHost;
+ (id)spt_spotifyTransportHTTPScheme;
+ (id)spt_characterSetForPathComponents;
+ (id)spt_componentsForService:(id)arg1 relativeURI:(id)arg2;
+ (id)spt_componentsForRelativeURI:(id)arg1;
+ (id)spt_componentsForService:(id)arg1 pathComponents:(id)arg2 queryParameters:(id)arg3 transport:(long long)arg4;
+ (id)spt_componentsForHTTPTransport;
@property(copy, nonatomic, setter=spt_setPathComponents:) NSArray *spt_pathComponents;
@property(copy, nonatomic, setter=spt_setQueryParameters:) NSDictionary *spt_queryParameters;
@end

