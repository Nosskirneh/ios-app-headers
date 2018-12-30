//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class ANGUserVideo, NSString;

@interface ANGReportUserVideoLoader : Loader
{
    NSString *_reportReason;
    ANGUserVideo *_videoToReport;
}

@property(retain, nonatomic) ANGUserVideo *videoToReport; // @synthesize videoToReport=_videoToReport;
@property(retain, nonatomic) NSString *reportReason; // @synthesize reportReason=_reportReason;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;
- (id)initWithReportReason:(id)arg1 video:(id)arg2;

@end
