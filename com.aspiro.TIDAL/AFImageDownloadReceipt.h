//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionDataTask, NSUUID;

@interface AFImageDownloadReceipt : NSObject
{
    NSURLSessionDataTask *_task;
    NSUUID *_receiptID;
}

@property(retain, nonatomic) NSUUID *receiptID; // @synthesize receiptID=_receiptID;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)initWithReceiptID:(id)arg1 task:(id)arg2;

@end

