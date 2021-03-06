//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GSCErrorDescription : NSObject
{
    NSString *_filePath;
    NSString *_functionName;
    unsigned long long _lineNumber;
    NSArray *_stackTrace;
    NSString *_rawFormatString;
    NSString *_errorMessage;
}

@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *rawFormatString; // @synthesize rawFormatString=_rawFormatString;
@property(retain, nonatomic) NSArray *stackTrace; // @synthesize stackTrace=_stackTrace;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;

@end

