/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSEC2ConversionTask;

@interface AWSEC2ImportInstanceResult : AWSModel {
	AWSEC2ConversionTask* _conversionTask;
}
@property(retain, nonatomic) AWSEC2ConversionTask* conversionTask;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)conversionTaskJSONTransformer;
- (void).cxx_destruct;
@end

