//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WMPJSONParser;

@interface WMPSearchServiceProvider : NSObject
{
    WMPJSONParser *_dataParser;
}

@property(retain, nonatomic) WMPJSONParser *dataParser; // @synthesize dataParser=_dataParser;
- (void).cxx_destruct;
- (id)joinedStringFromContentTypes:(id)arg1;
- (void)loadSearchSuggestions:(id)arg1 forSearchContentTypes:(id)arg2 sortAndRangeParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end
