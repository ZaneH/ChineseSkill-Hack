/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSCognitoSyncDataset;

@interface AWSCognitoSyncDescribeDatasetResponse : AWSModel {
	AWSCognitoSyncDataset* _dataset;
}
@property(retain, nonatomic) AWSCognitoSyncDataset* dataset;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)datasetJSONTransformer;
- (void).cxx_destruct;
@end

