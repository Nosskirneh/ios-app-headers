//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class M3U8ExtXMediaList, M3U8ExtXStreamInfList, NSString;

@interface M3U8MasterPlaylist : NSObject
{
    NSString *_name;
    NSString *_version;
    NSString *_originalText;
    NSString *_baseURL;
    M3U8ExtXStreamInfList *_xStreamList;
    M3U8ExtXMediaList *_xMediaList;
}

@property(retain, nonatomic) M3U8ExtXMediaList *xMediaList; // @synthesize xMediaList=_xMediaList;
@property(retain, nonatomic) M3U8ExtXStreamInfList *xStreamList; // @synthesize xStreamList=_xStreamList;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)m3u8PlanStringUsingAbsoluteURLs:(_Bool)arg1 urlPrefix:(id)arg2 urlSuffix:(id)arg3;
- (id)m3u8PlanString;
- (id)alternativeXStreamInfList;
- (id)allStreamURLs;
- (id)attributesFromString:(id)arg1;
- (void)parseMasterPlaylist;
- (id)initWithContentOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;

@end

