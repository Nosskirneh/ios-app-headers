//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GFBArchivedFeedbackReport : NSObject
{
    NSString *_path;
    NSData *_reportData;
    struct GFBArchivedFeedbackReportMetadata _metadata;
}

@property(retain, nonatomic) NSData *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) struct GFBArchivedFeedbackReportMetadata metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long timestamp;

@end

